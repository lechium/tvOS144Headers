//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iAP2IdentificationParameter.h"

@class NSMutableArray, NSNumber, NSString;

@interface iAP2CameraComponent : iAP2IdentificationParameter
{
    NSNumber *_componentID;	// 24 = 0x18
    NSString *_componentName;	// 32 = 0x20
    NSMutableArray *_supportedImageCaptureFormatIdentifiers;	// 40 = 0x28
    NSMutableArray *_supportedLivePreviewFormatIdentifiers;	// 48 = 0x30
}

@property(retain) NSMutableArray *supportedLivePreviewFormatIdentifiers; // @synthesize supportedLivePreviewFormatIdentifiers=_supportedLivePreviewFormatIdentifiers;
@property(retain) NSMutableArray *supportedImageCaptureFormatIdentifiers; // @synthesize supportedImageCaptureFormatIdentifiers=_supportedImageCaptureFormatIdentifiers;
@property(retain) NSString *componentName; // @synthesize componentName=_componentName;
@property(retain) NSNumber *componentID; // @synthesize componentID=_componentID;
- (void)addSupportedLivePreviewFormatIdentifier:(id)arg1;	// IMP=0x000000010002dd88
- (void)addSupportedImageCaptureFormatIdentifier:(id)arg1;	// IMP=0x000000010002dd34
- (void)dealloc;	// IMP=0x000000010002dcb4
- (id)init;	// IMP=0x000000010002dc7c

@end

