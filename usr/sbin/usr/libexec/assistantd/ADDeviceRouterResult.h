//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ADPeerInfo, NSError, NSString;

@interface ADDeviceRouterResult : NSObject <NSCopying, NSSecureCoding>
{
    ADPeerInfo *_peerInfo;	// 8 = 0x8
    long long _proximity;	// 16 = 0x10
    NSString *_commandRelayProxyIdentifier;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010019cf24
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010019d4b8
- (void).cxx_destruct;	// IMP=0x000000010019d184
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *commandRelayProxyIdentifier; // @synthesize commandRelayProxyIdentifier=_commandRelayProxyIdentifier;
@property(readonly, nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(readonly, copy, nonatomic) ADPeerInfo *peerInfo; // @synthesize peerInfo=_peerInfo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010019d090
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010019cf2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010019cf20
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010019cd8c
- (unsigned long long)hash;	// IMP=0x000000010019ccf4
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010019ca64
- (id)description;	// IMP=0x000000010019ca54
- (id)initWithPeerInfo:(id)arg1 proximity:(long long)arg2 commandRelayProxyIdentifier:(id)arg3 error:(id)arg4;	// IMP=0x000000010019c950
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010019d538

@end

