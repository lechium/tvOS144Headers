//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PQLInjecting-Protocol.h"

@class NSData, NSString;

@interface _CPLPrequeliteScopeIsEqual : NSObject <PQLInjecting>
{
    NSString *_identifier;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00000001000273d4
- (void).cxx_destruct;	// IMP=0x00000001000274fc
- (id)bindValuesToKeepAlive;	// IMP=0x00000001000274f4
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x00000001000274d0
@property(readonly, nonatomic) NSData *sql;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000100027444

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

