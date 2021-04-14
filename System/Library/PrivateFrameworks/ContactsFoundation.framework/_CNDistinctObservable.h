/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@class NSMutableSet;

@interface _CNDistinctObservable : CNObservable {

	id<CNObservable> _observable;
	NSMutableSet* _previouslyObservedResults;

}
-(id)subscribe:(id)arg1 ;
-(BOOL)_resultIsDistinct:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
@end

