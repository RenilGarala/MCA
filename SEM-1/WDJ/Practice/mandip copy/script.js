// --- Configuration and Data ---

// 1. Trainer Data Structure (Logical Backend Mock)
const trainersData = [
    { id: 1, name: 'Trainer 1', specialty: 'Bodybuilding Specialist', schedule: { 'Monday': ['8:00', '9:00', '13:00'], 'Tuesday': ['10:00', '11:00'] } },
    { id: 2, name: 'Trainer 2', specialty: 'Cardio & Endurance Expert', schedule: { 'Monday': ['14:00', '15:00'], 'Wednesday': ['9:00', '12:00'] } },
    { id: 3, name: 'Trainer 3', specialty: 'Yoga & Flexibility Coach', schedule: { 'Thursday': ['17:00', '18:00'], 'Friday': ['11:00', '16:00'] } },
    { id: 4, name: 'Trainer 4', specialty: 'Powerlifting Coach', schedule: { 'Tuesday': ['8:00', '9:00'], 'Thursday': ['14:00', '15:00'] } },
    { id: 5, name: 'Trainer 5', specialty: 'Weight Loss Consultant', schedule: { 'Wednesday': ['10:00', '11:00'], 'Friday': ['13:00', '14:00'] } },
    { id: 6, name: 'Trainer 6', specialty: 'Rehabilitation Specialist', schedule: { 'Monday': ['16:00', '17:00'], 'Saturday': ['9:00', '10:00'] } },
];

const availableDays = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
const availableTimes = ['8:00', '9:00', '10:00', '11:00', '12:00', '13:00', '14:00', '15:00', '16:00', '17:00', '18:00'];


// --- UI/UX Utilities ---

/**
 * Replaces native alert/confirm with a custom styled message box.
 * @param {string} message - The message to display.
 * @param {boolean} isSuccess - True for success, false for error/warning.
 */
function showMessageBox(message, isSuccess = true) {
    let msgBox = document.getElementById('customMessageBox');
    if (!msgBox) {
        msgBox = document.createElement('div');
        msgBox.id = 'customMessageBox';
        // Basic inline styling for a floating message box
        msgBox.style.cssText = `
            position: fixed; top: 20px; right: 20px; z-index: 2000;
            padding: 15px 30px; border-radius: 8px; box-shadow: 0 4px 15px rgba(0,0,0,0.2);
            font-weight: bold; transition: opacity 0.5s, transform 0.5s;
            opacity: 0; transform: translateX(100%);
        `;
        document.body.appendChild(msgBox);
    }

    // Set content and style based on success/error
    msgBox.textContent = message;
    msgBox.style.backgroundColor = isSuccess ? '#4CAF50' : '#ff004f'; // Green for success, Red for error
    msgBox.style.color = '#ffffff';

    // Show message box
    setTimeout(() => {
        msgBox.style.opacity = '1';
        msgBox.style.transform = 'translateX(0)';
    }, 10);

    // Hide message box after 4 seconds
    setTimeout(() => {
        msgBox.style.opacity = '0';
        msgBox.style.transform = 'translateX(100%)';
    }, 4000);
}


// --- DOM Elements ---
const navLinks = document.querySelectorAll('.nav-link');
const pages = document.querySelectorAll('.page');
const menuToggle = document.getElementById('menuToggle');
const navMenu = document.getElementById('navMenu');
const submitBtn = document.getElementById('submitBtn');


// --- Page Navigation and View Management ---

/**
 * Function to show selected page and handle active state.
 * @param {string} pageName - The ID of the page to show (e.g., 'home', 'trainers').
 */
function showPage(pageName) {
    pages.forEach(page => {
        page.classList.remove('active');
    });

    const selectedPage = document.getElementById(pageName);
    if (selectedPage) {
        selectedPage.classList.add('active');
    }

    navLinks.forEach(link => {
        link.classList.remove('active');
        if (link.dataset.page === pageName) {
            link.classList.add('active');
        }
    });

    // CRITICAL: Render booking UI only when navigating to the trainers page
    if (pageName === 'trainers') {
        renderTrainerBookingUI();
    }

    window.scrollTo({ top: 0, behavior: 'smooth' });
}

// Add click event to all navigation links
navLinks.forEach(link => {
    link.addEventListener('click', (e) => {
        e.preventDefault();
        const pageName = link.dataset.page;
        showPage(pageName);

        // Close mobile menu if open
        navMenu.classList.remove('active');
    });
});

// Mobile menu toggle
menuToggle.addEventListener('click', () => {
    // Toggles the 'active' class which is handled by the CSS media query
    navMenu.classList.toggle('active');
});

// Close mobile menu when clicking outside
document.addEventListener('click', (e) => {
    // Check if the click is outside the menu AND outside the toggle button
    if (!navMenu.contains(e.target) && !menuToggle.contains(e.target)) {
        navMenu.classList.remove('active');
    }
});


// --- Trainer Booking Logical Feature ---

/**
 * Renders the booking UI (select boxes and button) onto each trainer card dynamically.
 * This is crucial as the booking elements are not in the static HTML.
 */
function renderTrainerBookingUI() {
    // Only proceed if the booking UI has not been rendered yet to prevent duplicates
    if (document.querySelector('.trainer-card .booking-ui')) return;

    const trainerCards = document.querySelectorAll('.trainer-card');

    trainerCards.forEach((card, index) => {
        const trainer = trainersData[index];
        if (!trainer) return;

        // Generate the HTML for the booking controls
        const bookingUI = `
            <div class="booking-ui" data-trainer-id="${trainer.id}">
                <hr style="border-top: 1px solid #444; margin: 15px 0;">
                <h4 style="color: var(--secondary-color); margin-bottom: 10px; font-size: 1.2em;">Book a Slot:</h4>
                <div class="form-group" style="margin-bottom: 10px;">
                    <select class="booking-day" style="width: 100%; padding: 8px; background: #333; color: white; border: 1px solid #555; border-radius: 4px; margin-bottom: 5px;">
                        <option value="">Select Day</option>
                        ${availableDays.map(day => `<option value="${day}">${day}</option>`).join('')}
                    </select>
                </div>
                <div class="form-group" style="margin-bottom: 15px;">
                    <select class="booking-time" style="width: 100%; padding: 8px; background: #333; color: white; border: 1px solid #555; border-radius: 4px;">
                        <option value="">Select Time</option>
                        ${availableTimes.map(time => `<option value="${time}">${time}</option>`).join('')}
                    </select>
                </div>
                <button class="btn-primary book-btn" style="width: 100%; padding: 10px; font-size: 0.9em;">Confirm Booking</button>
            </div>
        `;
        const trainerInfo = card.querySelector('.trainer-info');
        if (trainerInfo) {
            trainerInfo.insertAdjacentHTML('beforeend', bookingUI);
        }
    });

    // Add event listeners to the newly created booking buttons
    document.querySelectorAll('.book-btn').forEach(btn => {
        btn.addEventListener('click', handleBookingAttempt);
    });
}

/**
 * Implements the core business logic for booking a trainer slot.
 * Checks for availability and performs an in-memory update (mocking a database save).
 * @param {Event} e - The click event from the booking button.
 */
function handleBookingAttempt(e) {
    e.preventDefault();
    const uiContainer = e.target.closest('.booking-ui');
    if (!uiContainer) return;

    const trainerId = parseInt(uiContainer.dataset.trainerId);
    const day = uiContainer.querySelector('.booking-day').value;
    const time = uiContainer.querySelector('.booking-time').value;

    const trainer = trainersData.find(t => t.id === trainerId);

    if (!day || !time) {
        showMessageBox('Please select both a Day and a Time for your booking.', false);
        return;
    }

    // Logical Check 1: Is the slot already marked as booked for this trainer?
    const isSlotBooked = trainer.schedule[day] && trainer.schedule[day].includes(time);

    if (isSlotBooked) {
        showMessageBox(`Sorry, ${trainer.name} is already BOOKED on ${day} at ${time}. Please choose another slot.`, false);
    } else {
        // Logical Action: Book the slot (In-memory update for demonstration)
        if (!trainer.schedule[day]) {
            trainer.schedule[day] = [];
        }
        trainer.schedule[day].push(time);
        trainer.schedule[day].sort(); // Keep the schedule sorted

        showMessageBox(`SUCCESS! You have booked ${trainer.name} on ${day} at ${time}.`, true);

        // Clear the inputs after successful booking
        uiContainer.querySelector('.booking-day').value = '';
        uiContainer.querySelector('.booking-time').value = '';
    }

    console.log(`Trainer ${trainerId}'s updated schedule:`, trainer.schedule);
}


// --- Contact Form Submission & Validation ---

submitBtn.addEventListener('click', (e) => {
    e.preventDefault();

    const nameInput = document.getElementById('name');
    const emailInput = document.getElementById('email');
    const phoneInput = document.getElementById('phone');
    const messageInput = document.getElementById('message');

    const name = nameInput.value.trim();
    const email = emailInput.value.trim();
    const phone = phoneInput.value.trim();
    const message = messageInput.value.trim();

    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

    // Check for empty fields
    if (!name || !email || !phone || !message) {
        showMessageBox('Please fill all fields!', false);
        return;
    }

    // Check for valid email format
    if (!emailRegex.test(email)) {
        showMessageBox('Please enter a valid email address!', false);
        return;
    }

    // SUCCESS: Mock data submission
    showMessageBox('Thank you for contacting Elite Gym! We will get back to you soon.', true);

    // Clear form fields
    nameInput.value = '';
    emailInput.value = '';
    phoneInput.value = '';
    messageInput.value = '';
});


// --- General UI/UX Enhancements ---

// Smooth scroll for all buttons (Placeholder for custom actions)
const buttons = document.querySelectorAll('.btn-primary, .btn-secondary');
buttons.forEach(button => {
    button.addEventListener('click', (e) => {
        // If the button is part of the form/booking, its logic is handled above/separately
        if (e.target.classList.contains('book-btn') || e.target.id === 'submitBtn') return;

        // Custom action for general buttons like "Join Now"
        if (e.target.textContent.includes('Join Now')) {
             // Mock action: Go to contact page for joining
             showPage('contact');
        } else if (e.target.textContent.includes('Choose Plan')) {
            showMessageBox('Membership selection mock successful. Redirecting to payment...', true);
            // In a real app, this would navigate to a payment gateway
        }
    });
});

// Scroll Animation Logic
// const scrollAnimationElements = '.feature-card, .trainer-card, .diet-card, .price-card';

window.addEventListener('scroll', () => {
    const elements = document.querySelectorAll(scrollAnimationElements);

    elements.forEach(element => {
        const position = element.getBoundingClientRect();

        // Check if element is in viewport (with a 100px buffer above the bottom)
        if (position.top < window.innerHeight - 100 && position.bottom >= 0) {
            element.style.opacity = '1';
            element.style.transform = 'translateY(0)';
        }
    });
});


// --- Initialization ---

document.addEventListener('DOMContentLoaded', () => {
    showPage('home');

    // Set initial styles for scroll animations (hidden and slightly offset)
    const elements = document.querySelectorAll(scrollAnimationElements);
    elements.forEach(element => {
        element.style.opacity = '0';
        element.style.transform = 'translateY(20px)';
        element.style.transition = 'opacity 0.5s ease, transform 0.5s ease';
    });
    
    // Trigger initial scroll check to show elements already in the viewport
    window.dispatchEvent(new Event('scroll'));
});