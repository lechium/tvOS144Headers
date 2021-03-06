//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HNDDeviceDelegate;

@interface HNDDevice : NSObject
{
    struct __IOHIDDevice *_hidDevice;	// 8 = 0x8
    id <HNDDeviceDelegate> _delegate;	// 16 = 0x10
    char *_hidReportBuffer;	// 24 = 0x18
    _Bool _isLoaded;	// 32 = 0x20
    _Bool _secondaryButton;	// 33 = 0x21
    _Bool _tertiaryButton;	// 34 = 0x22
    _Bool _wheel;	// 35 = 0x23
    double _minY;	// 40 = 0x28
    double _maxY;	// 48 = 0x30
    double _minX;	// 56 = 0x38
    double _maxX;	// 64 = 0x40
}

+ (id)createNewDevice:(struct __IOHIDDevice *)arg1;	// IMP=0x00000001000260dc
- (void).cxx_destruct;	// IMP=0x0000000100027400
@property(readonly, nonatomic) _Bool wheel; // @synthesize wheel=_wheel;
@property(readonly, nonatomic) _Bool tertiaryButton; // @synthesize tertiaryButton=_tertiaryButton;
@property(readonly, nonatomic) _Bool secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(nonatomic) __weak id <HNDDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void)unload;	// IMP=0x0000000100027278
- (_Bool)load;	// IMP=0x00000001000269ac
- (void)handleUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 value:(long long)arg3;	// IMP=0x00000001000267f4
- (void)handleValueCallback:(struct __IOHIDValue *)arg1;	// IMP=0x00000001000266f0
- (void)handleReportCallback:(int)arg1 report:(char *)arg2 reportLength:(long long)arg3;	// IMP=0x00000001000266ec
- (_Bool)containsHIDDevice:(struct __IOHIDDevice *)arg1;	// IMP=0x00000001000266dc
- (id)actionOverrideForUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2;	// IMP=0x00000001000266d4
- (void)dealloc;	// IMP=0x0000000100026678
- (id)description;	// IMP=0x0000000100026048
- (id)_initWithHIDDevice:(struct __IOHIDDevice *)arg1;	// IMP=0x0000000100026004

@end

