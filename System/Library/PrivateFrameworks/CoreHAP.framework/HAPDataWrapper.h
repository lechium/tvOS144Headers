/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPFieldWrapper.h>

@class NSData;

@interface HAPDataWrapper : HAPFieldWrapper {

	NSData* _field;

}

@property (nonatomic,retain) NSData * field;              //@synthesize field=_field - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 ;
-(NSData *)field;
-(void)setField:(NSData *)arg1 ;
@end

