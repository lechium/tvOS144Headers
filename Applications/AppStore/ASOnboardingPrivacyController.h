//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface ASOnboardingPrivacyController : NSObject
{
    UIViewController *_linkController;	// 8 = 0x8
}

+ (id)makeArcadeSplashController;	// IMP=0x0000000100002b70
+ (id)makeAppStoreSplashController;	// IMP=0x0000000100002b3c
+ (id)privacyLinkIdentifiersWithIsArcadeEnabled:(_Bool)arg1;	// IMP=0x0000000100002a80
- (void).cxx_destruct;	// IMP=0x0000000100002bb8
@property(retain, nonatomic) UIViewController *linkController; // @synthesize linkController=_linkController;
- (void)setPresentationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000029f8
- (void)dealloc;	// IMP=0x0000000100002984
- (id)initWithIsArcadeSupported:(_Bool)arg1 withLocale:(id)arg2;	// IMP=0x0000000100002888

@end

