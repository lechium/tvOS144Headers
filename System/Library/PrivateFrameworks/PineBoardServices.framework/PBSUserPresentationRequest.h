/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PBSUserPresentationRequest : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSDictionary* _options;

}

@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSDictionary *)options;
-(id)initWithType:(unsigned long long)arg1 options:(id)arg2 ;
@end

