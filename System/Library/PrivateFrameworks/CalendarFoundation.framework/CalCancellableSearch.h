/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CalCancellableSearch : NSObject {

	/*^block*/id _cancellationBlock;

}

@property (nonatomic,copy) id cancellationBlock;              //@synthesize cancellationBlock=_cancellationBlock - In the implementation block
-(void)cancel;
-(void)setCancellationBlock:(id)arg1 ;
-(id)cancellationBlock;
-(id)initWithCancellationBlock:(/*^block*/id)arg1 ;
@end

