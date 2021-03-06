//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface ADCoreBluetoothDevice : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSNumber *_RSSI;	// 24 = 0x18
    NSString *_state;	// 32 = 0x20
    NSString *_index;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010020a540
@property(retain, nonatomic) NSString *index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)dictionaryRepresentation;	// IMP=0x000000010020a480
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 RSSI:(id)arg3 state:(id)arg4;	// IMP=0x000000010020a384

@end

