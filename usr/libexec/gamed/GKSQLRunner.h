//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection;

@interface GKSQLRunner : NSObject
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)runnerWithConnection:(id)arg1;	// IMP=0x0000000100125554
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (int)runSQL:(id)arg1;	// IMP=0x000000010012567c
- (int)runSQLFromFileAtPath:(id)arg1;	// IMP=0x0000000100125634
- (void)dealloc;	// IMP=0x00000001001255ec
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010012558c

@end

