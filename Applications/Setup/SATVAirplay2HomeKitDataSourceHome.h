//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVAirplay2DataSourceObject-Protocol.h"

@class NSString, TVCSHome;

@interface SATVAirplay2HomeKitDataSourceHome : NSObject <SATVAirplay2DataSourceObject>
{
    TVCSHome *_home;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001e974
@property(readonly, nonatomic) TVCSHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithHome:(id)arg1;	// IMP=0x000000010001e754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

