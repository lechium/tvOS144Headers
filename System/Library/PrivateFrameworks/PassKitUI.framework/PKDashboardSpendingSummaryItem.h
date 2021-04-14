/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKSpendingSummary, NSString;

@interface PKDashboardSpendingSummaryItem : NSObject <PKDashboardItem> {

	PKSpendingSummary* _spendingSummary;

}

@property (nonatomic,retain) PKSpendingSummary * spendingSummary;              //@synthesize spendingSummary=_spendingSummary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PKSpendingSummary *)spendingSummary;
-(void)setSpendingSummary:(PKSpendingSummary *)arg1 ;
@end

