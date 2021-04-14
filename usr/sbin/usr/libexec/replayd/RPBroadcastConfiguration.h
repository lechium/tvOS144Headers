//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding>
{
    double _clipDuration;	// 8 = 0x8
    NSDictionary *_videoCompressionProperties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100029e94
- (void).cxx_destruct;	// IMP=0x0000000100029ec0
@property(retain, nonatomic) NSDictionary *videoCompressionProperties; // @synthesize videoCompressionProperties=_videoCompressionProperties;
@property(nonatomic) double clipDuration; // @synthesize clipDuration=_clipDuration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100029dbc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100029cc8

@end

