/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPLAbstractObject;
@interface CPLPlatformObject : NSObject {

	id<CPLAbstractObject> _abstractObject;

}

@property (nonatomic,__weak,readonly) id<CPLAbstractObject> abstractObject;              //@synthesize abstractObject=_abstractObject - In the implementation block
-(id)description;
-(id)init;
-(id<CPLAbstractObject>)abstractObject;
-(id)initWithAbstractObject:(id)arg1 ;
@end

