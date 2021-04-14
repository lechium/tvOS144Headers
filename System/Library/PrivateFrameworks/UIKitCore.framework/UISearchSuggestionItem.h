/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UISearchSuggestion.h>

@class NSString, UIImage;

@interface UISearchSuggestionItem : NSObject <UISearchSuggestion> {

	NSString* _localizedSuggestion;
	NSString* _localizedDescription;
	UIImage* _iconImage;

}

@property (nonatomic,readonly) NSString * localizedSuggestion;               //@synthesize localizedSuggestion=_localizedSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) UIImage * iconImage;                          //@synthesize iconImage=_iconImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionWithLocalizedSuggestion:(id)arg1 descriptionString:(id)arg2 iconImage:(id)arg3 ;
+(id)suggestionWithLocalizedSuggestion:(id)arg1 ;
+(id)suggestionWithLocalizedSuggestion:(id)arg1 descriptionString:(id)arg2 ;
-(NSString *)localizedDescription;
-(UIImage *)iconImage;
-(NSString *)localizedSuggestion;
-(id)initWithLocalizedSuggestion:(id)arg1 localizedDescription:(id)arg2 iconImage:(id)arg3 ;
-(id)initWithLocalizedSuggestion:(id)arg1 ;
-(id)initWithLocalizedSuggestion:(id)arg1 localizedDescription:(id)arg2 ;
@end

