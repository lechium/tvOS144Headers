/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString;

@interface _TVButtonSection : NSObject {

	NSMutableArray* _alertButtons;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfFirstNonDestructiveButton; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)addButton:(id)arg1 ;
-(long long)alertButtonCount;
-(id)alertButtonAtIndex:(unsigned long long)arg1 ;
-(void)addFirstButton:(id)arg1 ;
-(unsigned long long)indexOfFirstInitialSelectionButton;
-(unsigned long long)indexOfButton:(id)arg1 ;
-(void)applyToAllVisibleButtons:(/*^block*/id)arg1 ;
-(void)applyToAllCancelButtons:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfFirstNonDestructiveButton;
@end
