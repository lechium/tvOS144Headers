//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ODRLaunchServicesObserver : NSObject
{
}

+ (_Bool)_installTypeIsDowngrade:(unsigned long long)arg1;	// IMP=0x000000010010288c
+ (void)_handleUninstalledApplication:(id)arg1;	// IMP=0x0000000100102774
+ (void)_handleInstalledApplication:(id)arg1;	// IMP=0x0000000100102238
+ (void)_handleDemotedApplication:(id)arg1;	// IMP=0x000000010010211c
+ (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000100101f0c
+ (void)applicationsDidInstall:(id)arg1 isPlaceholder:(_Bool)arg2;	// IMP=0x0000000100101b80

@end
