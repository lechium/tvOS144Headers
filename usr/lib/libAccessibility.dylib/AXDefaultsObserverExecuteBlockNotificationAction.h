/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAccessibility.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AXDefaultsObserverAction.h>

@class NSString;

@interface AXDefaultsObserverExecuteBlockNotificationAction : NSObject <AXDefaultsObserverAction> {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)performForChangedDefault:(id)arg1 ;
@end

