// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004-2010 Steve Nygard.

#import <Foundation/Foundation.h>

@interface CDSearchPathState : NSObject
{
    NSString *executablePath;
    NSMutableArray *searchPathStack;
}

- (id)init;
- (void)dealloc;

@property (nonatomic, retain) NSString *executablePath;

- (void)pushSearchPaths:(NSArray *)searchPaths;
- (void)popSearchPaths;

- (NSString *)resolvePath:(NSString *)aPath;
- (NSArray *)searchPaths;

@end
