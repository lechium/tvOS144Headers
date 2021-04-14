/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXSearchQueryControllerProtocol.h>

@class NSString;

@interface PXSearchSampleQueryController : NSObject <PXSearchQueryControllerProtocol> {

	/*^block*/id _sampleResultsHandler;

}

@property (nonatomic,copy,readonly) id sampleResultsHandler;              //@synthesize sampleResultsHandler=_sampleResultsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performSearch:(id)arg1 ;
-(id)initWithResultsHandler:(/*^block*/id)arg1 ;
-(id)sampleResultsHandler;
@end
