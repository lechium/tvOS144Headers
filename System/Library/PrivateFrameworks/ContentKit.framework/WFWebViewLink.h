/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContentKit/ContentKit-Structs.h>
@class NSURL;

@interface WFWebViewLink : NSObject {

	NSURL* _href;
	CGRect _rect;

}

@property (nonatomic,readonly) NSURL * href;              //@synthesize href=_href - In the implementation block
@property (nonatomic,readonly) CGRect rect;               //@synthesize rect=_rect - In the implementation block
-(CGRect)rect;
-(NSURL *)href;
-(id)initWithHref:(id)arg1 rect:(CGRect)arg2 ;
@end
