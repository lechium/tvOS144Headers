//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVNPRoute.h"

@protocol HMMediaDestination;

@interface TVNPMediaDestinationRoute : TVNPRoute
{
    id <HMMediaDestination> _mediaDestination;	// 88 = 0x58
}

+ (_Bool)_availableStatusForMediaDestination:(id)arg1;	// IMP=0x000000010001d30c
- (void).cxx_destruct;	// IMP=0x000000010001d574
@property(retain, nonatomic) id <HMMediaDestination> mediaDestination; // @synthesize mediaDestination=_mediaDestination;
- (void)updateWithMediaDestination:(id)arg1 selectionState:(unsigned long long)arg2;	// IMP=0x000000010001d068
- (id)description;	// IMP=0x000000010001cfa0
- (id)init;	// IMP=0x000000010001cf6c

@end
