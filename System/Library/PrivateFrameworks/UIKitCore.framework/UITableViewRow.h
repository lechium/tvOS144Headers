/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {

	long long _indentationLevel;
	UITableViewCell* _cell;
	double _height;

}

@property (assign,nonatomic) double height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
+(id)row;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(void)setCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)cell;
-(void)setIndentationLevel:(long long)arg1 ;
-(long long)indentationLevel;
@end

