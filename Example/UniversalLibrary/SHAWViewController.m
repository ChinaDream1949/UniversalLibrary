//
//  SHAWViewController.m
//  UniversalLibrary
//
//  Created by Shaw on 09/19/2023.
//  Copyright (c) 2023 Shaw. All rights reserved.
//

#import "SHAWViewController.h"
#import <UniversalLibrary/ShawCountDownButton.h>

@interface SHAWViewController ()
@property (nonatomic , strong) ShawCountDownButton *btn;
@end

@implementation SHAWViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    _btn = [[ShawCountDownButton alloc]initWithFrame:CGRectMake(100, 100, 100, 40)];
    
    [self.view addSubview:_btn];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
