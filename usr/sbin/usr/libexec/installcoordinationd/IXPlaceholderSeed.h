//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXOwnedDataPromiseSeed.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>
{
    _Bool _isPlugin;	// 8 = 0x8
    NSString *_bundleName;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    unsigned long long _installType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100029c58
- (void).cxx_destruct;	// IMP=0x0000000100029de0
@property(nonatomic) _Bool isPlugin; // @synthesize isPlugin=_isPlugin;
@property(nonatomic) unsigned long long installType; // @synthesize installType=_installType;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100029c60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100029af0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100029984

@end

