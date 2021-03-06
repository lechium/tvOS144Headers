/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRAsyncCardRequestFeedback.h>

@protocol CRCard;
@class SFFeedback, NSString;

@interface CRBasicAsyncCardRequestFeedback : NSObject <CRAsyncCardRequestFeedback> {

	id<CRCard> baseCard;
	id<CRCard> requestedCard;

}

@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CRCard>)baseCard;
-(void)setBaseCard:(id<CRCard>)arg1 ;
-(id<CRCard>)requestedCard;
-(void)setRequestedCard:(id<CRCard>)arg1 ;
@end

