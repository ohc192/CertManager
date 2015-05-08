//
//  CertificateViewController.h
//  CertBrowser
//
//  Created by Ryan Burke on 25/02/2015.
//  Copyright (c) 2015 Ryan Burke. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface CertificateTableViewController : UITableViewController<UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) UIButton *backButton;

-(id)initWithCertificates:(NSMutableArray *)certs;
-(void)closeView:(id)sender;
@end
