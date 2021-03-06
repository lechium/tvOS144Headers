/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIFont, NSNumber;

@interface PKPassFieldTemplate : NSObject {

	UIFont* _labelFont;
	UIFont* _valueFont;
	Class _viewSubclass;
	NSNumber* _boxedTextAlignment;
	NSNumber* _boxedVerticalPadding;
	NSNumber* _boxedSuppressesLabel;
	NSNumber* _boxedLabelCaseStyle;
	NSNumber* _boxedValueSignificant;
	NSNumber* _boxedValueCanWrap;
	NSNumber* _boxedSuppressesEmptyLabel;

}

@property (nonatomic,retain) NSNumber * boxedTextAlignment;                     //@synthesize boxedTextAlignment=_boxedTextAlignment - In the implementation block
@property (nonatomic,retain) NSNumber * boxedVerticalPadding;                   //@synthesize boxedVerticalPadding=_boxedVerticalPadding - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesLabel;                   //@synthesize boxedSuppressesLabel=_boxedSuppressesLabel - In the implementation block
@property (nonatomic,retain) NSNumber * boxedLabelCaseStyle;                    //@synthesize boxedLabelCaseStyle=_boxedLabelCaseStyle - In the implementation block
@property (nonatomic,retain) NSNumber * boxedValueSignificant;                  //@synthesize boxedValueSignificant=_boxedValueSignificant - In the implementation block
@property (nonatomic,retain) NSNumber * boxedValueCanWrap;                      //@synthesize boxedValueCanWrap=_boxedValueCanWrap - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesEmptyLabel;              //@synthesize boxedSuppressesEmptyLabel=_boxedSuppressesEmptyLabel - In the implementation block
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) double verticalPadding; 
@property (nonatomic,retain) UIFont * labelFont;                                //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                                //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) BOOL suppressesLabel; 
@property (assign,nonatomic) BOOL suppressesEmptyLabel; 
@property (assign,nonatomic) long long labelCaseStyle; 
@property (assign,nonatomic) BOOL valueSignificant; 
@property (assign,nonatomic) BOOL valueCanWrap; 
@property (nonatomic,retain) Class viewSubclass;                                //@synthesize viewSubclass=_viewSubclass - In the implementation block
+(id)fieldTemplateWithTextAlignment:(long long)arg1 ;
+(id)_templateByResolvingTemplate:(id)arg1 withDefault:(id)arg2 ;
+(id)fieldTemplateWithVerticalPadding:(double)arg1 ;
+(id)fieldTemplateWithViewSubclass:(Class)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(UIFont *)labelFont;
-(void)setLabelFont:(UIFont *)arg1 ;
-(void)setValueFont:(UIFont *)arg1 ;
-(void)setVerticalPadding:(double)arg1 ;
-(void)setViewSubclass:(Class)arg1 ;
-(NSNumber *)boxedTextAlignment;
-(void)setBoxedTextAlignment:(NSNumber *)arg1 ;
-(NSNumber *)boxedVerticalPadding;
-(void)setBoxedVerticalPadding:(NSNumber *)arg1 ;
-(NSNumber *)boxedSuppressesLabel;
-(void)setBoxedSuppressesLabel:(NSNumber *)arg1 ;
-(NSNumber *)boxedSuppressesEmptyLabel;
-(void)setBoxedSuppressesEmptyLabel:(NSNumber *)arg1 ;
-(void)setBoxedLabelCaseStyle:(NSNumber *)arg1 ;
-(NSNumber *)boxedValueSignificant;
-(void)setBoxedValueSignificant:(NSNumber *)arg1 ;
-(NSNumber *)boxedValueCanWrap;
-(void)setBoxedValueCanWrap:(NSNumber *)arg1 ;
-(NSNumber *)boxedLabelCaseStyle;
-(UIFont *)valueFont;
-(Class)viewSubclass;
-(double)verticalPadding;
-(BOOL)suppressesLabel;
-(void)setSuppressesLabel:(BOOL)arg1 ;
-(BOOL)suppressesEmptyLabel;
-(void)setSuppressesEmptyLabel:(BOOL)arg1 ;
-(long long)labelCaseStyle;
-(void)setLabelCaseStyle:(long long)arg1 ;
-(BOOL)valueSignificant;
-(void)setValueSignificant:(BOOL)arg1 ;
-(BOOL)valueCanWrap;
-(void)setValueCanWrap:(BOOL)arg1 ;
@end

