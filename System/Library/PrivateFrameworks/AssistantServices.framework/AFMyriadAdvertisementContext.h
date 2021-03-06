/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AFMyriadAdvertisementContext : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _generation;
	NSData* _contextData;
	double _contextFetchDelay;

}

@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) NSData * contextData;                  //@synthesize contextData=_contextData - In the implementation block
@property (nonatomic,readonly) double contextFetchDelay;                   //@synthesize contextFetchDelay=_contextFetchDelay - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)generation;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSData *)contextData;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(double)contextFetchDelay;
-(id)initWithGeneration:(unsigned long long)arg1 contextData:(id)arg2 contextFetchDelay:(double)arg3 ;
@end

