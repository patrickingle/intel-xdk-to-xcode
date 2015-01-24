//
//  ViewController.h
//  XDK2XCODE
//
//  Created by Patrick Ingle on 1/24/15.
//  Copyright (c) 2015 Patrick Ingle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIWebViewDelegate, UITextFieldDelegate>

@property (nonatomic,strong) IBOutlet UIWebView *webView;

@end

