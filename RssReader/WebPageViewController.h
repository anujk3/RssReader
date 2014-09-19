//
//  WebPageViewController.h
//  RssReader
//
//  Created by Anuj Katiyal on 18/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebPageViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (strong, nonatomic) NSString *link;

@end
