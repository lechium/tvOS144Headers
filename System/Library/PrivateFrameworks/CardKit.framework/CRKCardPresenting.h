/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CRKCardPresentationConfiguration;


@protocol CRKCardPresenting <NSObject>
@property (nonatomic,copy) CRKCardPresentationConfiguration * configuration; 
@property (nonatomic,readonly) id<CRCard> card; 
@required
-(CRKCardPresentationConfiguration *)configuration;
-(void)setConfiguration:(id)arg1;
-(id<CRCard>)card;
-(void)setConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

