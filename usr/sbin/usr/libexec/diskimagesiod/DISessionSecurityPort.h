//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMachPort;

@interface DISessionSecurityPort : NSObject <NSSecureCoding, NSCoding>
{
    NSMachPort *_port;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000232cc
- (void).cxx_destruct;	// IMP=0x0000000100023478
@property(retain) NSMachPort *port; // @synthesize port=_port;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000233ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000232d4

@end

