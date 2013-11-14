//
//  MMLoginViewController.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

#import "MMLoginServiceProtocol.h"
#import "MMLoginServiceDelegate.h"
#import "MMRoutingInfoServiceDelegate.h"
#import "MMRoutingInfoServiceProtocol.h"

/**
 * Default implementation of the Login screen. This class acts as a login service and routing info service delegate. It reads the LoginViewController.xib for it's view.
 * @see MMLoginServiceDelegate
 * @see MMRoutingInfoServiceDelegate
 */
@interface MMLoginViewController : UIViewController<MMLoginServiceDelegate, MMRoutingInfoServiceDelegate, UITextFieldDelegate>

/** Defines the login service.
 * @see MMLoginServiceProtocol
 */
@property (nonatomic, strong) id<MMLoginServiceProtocol> loginService;

/** Defines the routing info service.
 * @see MMRoutingInfoServiceProtocol
 */
@property (nonatomic, strong) id<MMRoutingInfoServiceProtocol> routingInfoService;

// Outlets

/** Scroll view outlet. */
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;

/** user name outlet. */
@property (weak, nonatomic) IBOutlet UITextField *userName;

/** password outlet. */
@property (weak, nonatomic) IBOutlet UITextField *password;

/** server address outlet. */
@property (weak, nonatomic) IBOutlet UITextField *serverAddress;

/** use ssl outlet. */
@property (weak, nonatomic) IBOutlet UISwitch *useSSL;

/** trust all certificates outlet. */
@property (weak, nonatomic) IBOutlet UISwitch *trustAllCertificates;

/** login button outlet. */
@property (weak, nonatomic) IBOutlet UIButton *loginButton;

/** Use default activity indicator? */
@property (assign, nonatomic) BOOL showActivityIndicator;

// Actions

/** Called on login button click. */
- (IBAction)login;

@end
