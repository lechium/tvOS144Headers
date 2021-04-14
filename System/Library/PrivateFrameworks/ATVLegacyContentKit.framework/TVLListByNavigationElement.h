/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLGenericCollectionElement.h>

@class NSArray, NSString;

@interface TVLListByNavigationElement : TVLGenericCollectionElement {

	int _currentIndex;
	NSArray* _navigationItems;
	NSString* _onNavigate;

}

@property (assign,nonatomic) int currentIndex;                       //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) NSArray * navigationItems;              //@synthesize navigationItems=_navigationItems - In the implementation block
@property (nonatomic,copy) NSString * onNavigate;                    //@synthesize onNavigate=_onNavigate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setCurrentIndex:(int)arg1 ;
-(int)currentIndex;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(NSArray *)navigationItems;
-(NSString *)onNavigate;
-(void)setNavigationItems:(NSArray *)arg1 ;
-(void)setOnNavigate:(NSString *)arg1 ;
@end

