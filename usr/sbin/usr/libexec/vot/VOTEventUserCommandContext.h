//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXSSKeyChord, VOSCommand, VOSCommandResolver, VOSGesture;

@interface VOTEventUserCommandContext : NSObject
{
    VOSCommand *_command;	// 8 = 0x8
    VOSGesture *_gesture;	// 16 = 0x10
    AXSSKeyChord *_keyChord;	// 24 = 0x18
    VOSCommandResolver *_resolver;	// 32 = 0x20
}

+ (id)contextWithCommand:(id)arg1 gesture:(id)arg2 keyChord:(id)arg3 resolver:(id)arg4;	// IMP=0x0000000100016f90
- (void).cxx_destruct;	// IMP=0x00000001000170c8
@property(retain, nonatomic) VOSCommandResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) AXSSKeyChord *keyChord; // @synthesize keyChord=_keyChord;
@property(retain, nonatomic) VOSGesture *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) VOSCommand *command; // @synthesize command=_command;

@end

