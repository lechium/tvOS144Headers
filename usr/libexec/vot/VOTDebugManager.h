//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VOTElementManagementProtocol;

@interface VOTDebugManager : NSObject
{
    id <VOTElementManagementProtocol> _elementManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000fdf98
- (void).cxx_destruct;	// IMP=0x00000001000fe098
@property(retain, nonatomic) id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (void)dealloc;	// IMP=0x00000001000fe038
- (id)init;	// IMP=0x00000001000fe004

@end

