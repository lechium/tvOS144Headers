/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment {

	IKBadgeElement* _badge;
	IKColor* _tintColor;

}

@property (nonatomic,__weak,readonly) IKBadgeElement * badge;              //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) IKColor * tintColor;                          //@synthesize tintColor=_tintColor - In the implementation block
-(IKBadgeElement *)badge;
-(void)setTintColor:(IKColor *)arg1 ;
-(IKColor *)tintColor;
-(id)initWithBadgeElement:(id)arg1 ;
@end

