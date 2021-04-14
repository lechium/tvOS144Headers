//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRCompactViewControllerContentTester : NSObject
{
    _Bool _deviceIsPad;	// 8 = 0x8
    _Bool _navigationStackIsPopping;	// 9 = 0x9
    _Bool _navigationBarHasContent;	// 10 = 0xa
    _Bool _multiLevelViewHasContent;	// 11 = 0xb
    _Bool _editableUtteranceViewHasContent;	// 12 = 0xc
    _Bool _compactViewHasContent;	// 13 = 0xd
    _Bool _siriViewControllerIsEditing;	// 14 = 0xe
    long long _navigationStackSize;	// 16 = 0x10
}

@property(nonatomic) _Bool siriViewControllerIsEditing; // @synthesize siriViewControllerIsEditing=_siriViewControllerIsEditing;
@property(nonatomic) _Bool compactViewHasContent; // @synthesize compactViewHasContent=_compactViewHasContent;
@property(nonatomic) _Bool editableUtteranceViewHasContent; // @synthesize editableUtteranceViewHasContent=_editableUtteranceViewHasContent;
@property(nonatomic) _Bool multiLevelViewHasContent; // @synthesize multiLevelViewHasContent=_multiLevelViewHasContent;
@property(nonatomic) _Bool navigationBarHasContent; // @synthesize navigationBarHasContent=_navigationBarHasContent;
@property(nonatomic) long long navigationStackSize; // @synthesize navigationStackSize=_navigationStackSize;
@property(nonatomic) _Bool navigationStackIsPopping; // @synthesize navigationStackIsPopping=_navigationStackIsPopping;
@property(nonatomic) _Bool deviceIsPad; // @synthesize deviceIsPad=_deviceIsPad;
@property(readonly, nonatomic) _Bool hasContent;

@end

