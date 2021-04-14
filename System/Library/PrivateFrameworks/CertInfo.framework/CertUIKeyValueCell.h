/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface CertUIKeyValueCell : UITableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * keyLabel;                 //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)constraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupConstraints;
-(UILabel *)keyLabel;
-(void)setKeyLabel:(UILabel *)arg1 ;
@end

