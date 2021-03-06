/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIViewControllerPreviewAction : NSObject <NSCopying> {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)handler;
-(id)_initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

