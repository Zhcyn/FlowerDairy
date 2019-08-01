#import "BRIudgeViewController.h"
#import "BRDelegateViewController.h"
#import "AppDelegate.h"
@interface BRIudgeViewController ()
@end
@implementation BRIudgeViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    AppDelegate *tempAppDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    KEY_WINDOW.rootViewController = tempAppDelegate.LeftSlideVC;
    [KEY_WINDOW makeKeyAndVisible];
}
@end
