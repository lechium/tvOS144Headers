/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InAppMessagesCore/IAMEvent.h>

@protocol NSCopying;
@interface IAMValueEvent : IAMEvent {

	id<NSCopying> value;

}

@property (nonatomic,copy) id<NSCopying> value; 
-(id<NSCopying>)value;
-(void)setValue:(id<NSCopying>)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end

