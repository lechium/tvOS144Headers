/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIColor;

@interface UICellAccessoryInsert : UICellAccessory {

	/*^block*/id _actionHandler;

}

@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,copy) id actionHandler;                         //@synthesize actionHandler=_actionHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)_identifier;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(long long)_systemType;
-(long long)_systemTypePlacementForHeader:(BOOL)arg1 ;
@end

