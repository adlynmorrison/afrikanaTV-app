//
//  MasterViewController.h
//  afrikanaTV
//
//  Created by Student on 12/5/14.
//  Copyright (c) 2014 Adlyn Morrison. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController {
    DetailViewController *detailViewController;
    NSArray *webshows;
}

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

