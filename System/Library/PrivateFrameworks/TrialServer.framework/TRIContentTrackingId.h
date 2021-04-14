/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TRIContentTrackingId : NSObject <NSCopying> {

	NSString* _str;

}

@property (nonatomic,readonly) NSString * str;              //@synthesize str=_str - In the implementation block
+(id)contentIdWithStr:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithStr:(id)arg1 ;
-(NSString *)str;
-(BOOL)isEqualToContentId:(id)arg1 ;
-(id)copyWithReplacementStr:(id)arg1 ;
@end

