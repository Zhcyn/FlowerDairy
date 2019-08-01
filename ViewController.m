#import "ViewController.h"
#import "BRIudgeViewController.h"
@interface ViewController ()
@end
@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    BRIudgeViewController * iudgevc = [[BRIudgeViewController alloc]init];
    KEY_WINDOW.rootViewController = iudgevc;
}
@end
