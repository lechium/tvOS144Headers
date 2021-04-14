//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ASCArtwork, NSString;

@interface ASCVideo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_videoURL;	// 8 = 0x8
    ASCArtwork *_preview;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000ff84
- (void).cxx_destruct;	// IMP=0x0000000100010540
@property(readonly, copy, nonatomic) ASCArtwork *preview; // @synthesize preview=_preview;
@property(readonly, copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
- (id)description;	// IMP=0x000000010001043c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001029c
- (unsigned long long)hash;	// IMP=0x00000001000101d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000101d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001011c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000ff8c
- (id)initWithVideoURL:(id)arg1 preview:(id)arg2;	// IMP=0x000000010000fec4

@end

