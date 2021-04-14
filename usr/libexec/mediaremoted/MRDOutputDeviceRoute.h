//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDAVRoute.h"

@class MRAVOutputDevice;

@interface MRDOutputDeviceRoute : MRDAVRoute
{
    MRAVOutputDevice *_outputDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000ba0b0
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x00000001000ba088
- (id)extendedInfo;	// IMP=0x00000001000ba01c
- (id)dictionary;	// IMP=0x00000001000b9ca0
- (_Bool)canBeDefaultSystemRoute;	// IMP=0x00000001000b9c98
- (_Bool)canBeDefaultRoute;	// IMP=0x00000001000b9c90
- (_Bool)isSpeakerRoute;	// IMP=0x00000001000b9bdc
- (_Bool)isPicked;	// IMP=0x00000001000b9a1c
- (_Bool)isOutputRoute;	// IMP=0x00000001000b9a14
- (_Bool)isInputRoute;	// IMP=0x00000001000b9a0c
- (id)modelName;	// IMP=0x00000001000b99f4
- (id)type;	// IMP=0x00000001000b994c
- (id)name;	// IMP=0x00000001000b9934
- (id)MACAddress;	// IMP=0x00000001000b991c
- (id)uniqueIdentifier;	// IMP=0x00000001000b9904
- (id)description;	// IMP=0x00000001000b9878
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b97d8
- (unsigned long long)hash;	// IMP=0x00000001000b97c0
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x00000001000b9740

@end

