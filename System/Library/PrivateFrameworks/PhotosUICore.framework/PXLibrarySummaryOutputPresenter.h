/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSAttributedString, NSString, NSDictionary;


@protocol PXLibrarySummaryOutputPresenter <NSObject>
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL wantsDisclosureIndicator; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
@property (nonatomic,readonly) NSDictionary * emphasizedAttributes; 
@optional
-(void)setAttributedTitle:(id)arg1;
-(NSAttributedString *)attributedTitle;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(BOOL)wantsDisclosureIndicator;
-(void)setWantsDisclosureIndicator:(BOOL)arg1;
-(NSDictionary *)defaultAttributes;
-(NSDictionary *)emphasizedAttributes;

@end

