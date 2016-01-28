//
//  Book+CoreDataProperties.h
//  BookClub
//
//  Created by Steven Yang on 1/27/16.
//  Copyright © 2016 Le Mont. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Book.h"

NS_ASSUME_NONNULL_BEGIN

@interface Book (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSSet<Friend *> *isRead;
@property (nullable, nonatomic, retain) Comment *commented;

@end

@interface Book (CoreDataGeneratedAccessors)

- (void)addIsReadObject:(Friend *)value;
- (void)removeIsReadObject:(Friend *)value;
- (void)addIsRead:(NSSet<Friend *> *)values;
- (void)removeIsRead:(NSSet<Friend *> *)values;

@end

NS_ASSUME_NONNULL_END
