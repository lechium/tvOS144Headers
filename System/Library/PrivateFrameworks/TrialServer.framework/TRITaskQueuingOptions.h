/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _duplicateTaskResolution;

}

@property (nonatomic,readonly) unsigned long long duplicateTaskResolution;              //@synthesize duplicateTaskResolution=_duplicateTaskResolution - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)optionsWithDuplicateTaskResolution:(unsigned long long)arg1 ;
+(id)defaultOptionsWithIgnoreDuplicates;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(id)initWithDuplicateTaskResolution:(unsigned long long)arg1 ;
-(unsigned long long)duplicateTaskResolution;
-(id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end
